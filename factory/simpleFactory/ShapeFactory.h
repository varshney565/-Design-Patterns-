#pragma once
#include <functional>
#include <map>
#include <memory>

// ShapeFactory is a template-based factory class that can register and create shape objects.
// Base: The base class type (e.g., Shape).
// Key: Type used for identifying registered shapes.
// Args...: Variadic template for constructor arguments of shapes.
template <typename Base, typename Key, typename... Args>
class ShapeFactory {
public:
    using FactoryFunc = std::function<Base*(Args...)>; // Factory function signature

    // Registers a factory function with a unique key to the registry.
    static void registerType(Key key, FactoryFunc factory) {
        getRegistry()[key] = factory;
    }

    // Creates an instance of the registered type identified by the key.
    static std::unique_ptr<Base> create(Key key, Args... args) {
        auto it = getRegistry().find(key);
        if (it != getRegistry().end()) {
            return std::unique_ptr<Base>((it->second)(args...));
        }
        return nullptr;
    }

private:
    // Returns a reference to the registry map holding the registered factory functions.
    static std::map<Key, FactoryFunc>& getRegistry() {
        static std::map<Key, FactoryFunc> registry;
        return registry;
    }
};
