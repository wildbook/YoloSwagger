#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameEndOfGameVictoriousComrade_t {
    std::string summonerName;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameEndOfGameVictoriousComrade_t& v) {
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameEndOfGameVictoriousComrade_t& v) {
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolEndOfGameEndOfGameVictoriousComrade_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
