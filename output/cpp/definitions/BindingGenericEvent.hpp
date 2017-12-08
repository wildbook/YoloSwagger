#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  // Represents generic data for an event.
  struct BindingGenericEvent_t {
    // Event data
    nlohmann::json data;
  };

  inline void to_json(nlohmann::json& j, const BindingGenericEvent_t& v) {
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, BindingGenericEvent_t& v) {
    v.data = j.at("data").get<nlohmann::json>();
  }
  inline std::string to_string(const BindingGenericEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
