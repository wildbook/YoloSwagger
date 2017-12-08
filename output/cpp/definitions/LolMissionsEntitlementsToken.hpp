#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMissionsEntitlementsToken_t {
    std::vector<std::string> entitlements;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsEntitlementsToken_t& v) {
    j["entitlements"] = v.entitlements;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsEntitlementsToken_t& v) {
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>();
  }
  inline std::string to_string(const LolMissionsEntitlementsToken_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
