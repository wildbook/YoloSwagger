#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLeaguesLeagueTeamMember_t {
    float_t winRate;
    uint64_t_t id;
    uint64_t_t totalGamePlayed;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueTeamMember_t& v) {
    j["winRate"] = v.winRate;
    j["id"] = v.id;
    j["totalGamePlayed"] = v.totalGamePlayed;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueTeamMember_t& v) {
    v.winRate = j.at("winRate").get<float_t>();
    v.id = j.at("id").get<uint64_t_t>();
    v.totalGamePlayed = j.at("totalGamePlayed").get<uint64_t_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const LolLeaguesLeagueTeamMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
