#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistorySummonerIdAndName_t {
    std::string displayName;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistorySummonerIdAndName_t& v) {
    j["displayName"] = v.displayName;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistorySummonerIdAndName_t& v) {
    v.displayName = j.at("displayName").get<std::string>();
  }
  inline std::string to_string(const LolMatchHistorySummonerIdAndName_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
