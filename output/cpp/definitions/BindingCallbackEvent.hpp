#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  // Represents the parameters of a call to a provided callback.
  struct BindingCallbackEvent_t {
    // Callback parameters
    std::vector<nlohmann::json> parameters;
    // ID of the callback being invoked
    uint32_t id;
  };

  inline void to_json(nlohmann::json& j, const BindingCallbackEvent_t& v) {
    j["parameters"] = v.parameters;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, BindingCallbackEvent_t& v) {
    v.parameters = j.at("parameters").get<std::vector<nlohmann::json>>();
    v.id = j.at("id").get<uint32_t>();
  }
  inline std::string to_string(const BindingCallbackEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
