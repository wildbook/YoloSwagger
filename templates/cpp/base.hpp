#include <json.hpp>
#include <optional>
namespace nlohmann {
  template <typename T>
  struct adl_serializer<std::optional<T>> {
    static void to_json(json& j, const std::optional<T>& opt) {
      j = opt ? *j : nullptr;
    }
    static void from_json(const json& j, std::optional<T>& opt) {
      opt = j.is_null() ? std::nullopt : j.get<T>();
    }
  };
}