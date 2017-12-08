#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsLeagueItemDTO.hpp"
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
namespace leagueapi {
  struct LeaguesLcdsSummonerLeagueListDTO_t {
    LeaguesLcdsQueueType_t queue;
    uint64_t nextApexUpdate;
    std::string requestorsName;
    std::string name;
    std::vector<LeaguesLcdsLeagueItemDTO_t> entries;
    LeaguesLcdsLeagueTier_t tier;
    LeaguesLcdsLeagueRank_t requestorsRank;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsSummonerLeagueListDTO_t& v) {
    j["queue"] = v.queue;
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["requestorsName"] = v.requestorsName;
    j["name"] = v.name;
    j["entries"] = v.entries;
    j["tier"] = v.tier;
    j["requestorsRank"] = v.requestorsRank;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsSummonerLeagueListDTO_t& v) {
    v.queue = j.at("queue").get<LeaguesLcdsQueueType_t>();
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>();
    v.requestorsName = j.at("requestorsName").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO_t>>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
    v.requestorsRank = j.at("requestorsRank").get<LeaguesLcdsLeagueRank_t>();
  }
  inline std::string to_string(const LeaguesLcdsSummonerLeagueListDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
