#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueItemDTO.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
namespace leagueapi {
  struct LeaguesLcdsSummonerLeagueListDTO_t {
    std::vector<LeaguesLcdsLeagueItemDTO_t> entries;
    std::string name;
    uint64_t nextApexUpdate;
    LeaguesLcdsQueueType_t queue;
    std::string requestorsName;
    LeaguesLcdsLeagueRank_t requestorsRank;
    LeaguesLcdsLeagueTier_t tier;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsSummonerLeagueListDTO_t& v) {
    j["entries"] = v.entries;
    j["name"] = v.name;
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["queue"] = v.queue;
    j["requestorsName"] = v.requestorsName;
    j["requestorsRank"] = v.requestorsRank;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsSummonerLeagueListDTO_t& v) {
    v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO_t>>();
    v.name = j.at("name").get<std::string>();
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>();
    v.queue = j.at("queue").get<LeaguesLcdsQueueType_t>();
    v.requestorsName = j.at("requestorsName").get<std::string>();
    v.requestorsRank = j.at("requestorsRank").get<LeaguesLcdsLeagueRank_t>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
  }
}
