#ifndef SWAGGER_TYPES_BindingGenericEvent_HPP
#define SWAGGER_TYPES_BindingGenericEvent_HPP
#include <json.hpp>
namespace test {
  // Represents generic data for an event.
  struct BindingGenericEvent {
'    // Event data
    nlohmann::json data;
  };

  void to_json(nlohmann::json& j, const BindingGenericEvent& v) {
    j["data"] = v.data;
  }

  void from_json(const nlohmann::json& j, BindingGenericEvent& v) {
    v.data = j.at("data").get<nlohmann::json>;
  }

}
#endif // SWAGGER_TYPES_BindingGenericEvent_HPP
