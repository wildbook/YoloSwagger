#ifndef SWAGGER_TYPES_BindingCallbackEvent_HPP
#define SWAGGER_TYPES_BindingCallbackEvent_HPP
#include <json.hpp>
namespace leagueapi {
  // Represents the parameters of a call to a provided callback.
  struct BindingCallbackEvent {
    // ID of the callback being invoked
    uint32_t id;
    // Callback parameters
    std::vector<nlohmann::json> parameters;
  };

  inline void to_json(nlohmann::json& j, const BindingCallbackEvent& v) {
    j["id"] = v.id;
    j["parameters"] = v.parameters;
  }

  inline void from_json(const nlohmann::json& j, BindingCallbackEvent& v) {
    v.id = j.at("id").get<uint32_t>;
    v.parameters = j.at("parameters").get<std::vector<nlohmann::json>>;
  }

}
#endif // SWAGGER_TYPES_BindingCallbackEvent_HPP
