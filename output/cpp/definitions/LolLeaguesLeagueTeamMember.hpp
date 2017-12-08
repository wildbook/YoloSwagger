#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLeaguesLeagueTeamMember_t {
    float winRate;
    uint64_t id;
    uint64_t totalGamePlayed;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueTeamMember_t& v) {
    j["winRate"] = v.winRate;
    j["id"] = v.id;
    j["totalGamePlayed"] = v.totalGamePlayed;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueTeamMember_t& v) {
    v.winRate = j.at("winRate").get<float>();
    v.id = j.at("id").get<uint64_t>();
    v.totalGamePlayed = j.at("totalGamePlayed").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolLeaguesLeagueTeamMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
