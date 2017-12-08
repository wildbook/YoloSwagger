#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashGameflowAvailability_t {
    bool isAvailable;
  };

  inline void to_json(nlohmann::json& j, const LolClashGameflowAvailability_t& v) {
    j["isAvailable"] = v.isAvailable;
  }

  inline void from_json(const nlohmann::json& j, LolClashGameflowAvailability_t& v) {
    v.isAvailable = j.at("isAvailable").get<bool>();
  }
  inline std::string to_string(const LolClashGameflowAvailability_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
