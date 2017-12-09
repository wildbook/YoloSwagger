#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsLeagueItemDTO.hpp"
namespace leagueapi {
  struct LeaguesLcdsSummonerLeagueListDTO_t {
    uint64_t nextApexUpdate;
    LeaguesLcdsLeagueRank_t requestorsRank;
    std::vector<LeaguesLcdsLeagueItemDTO_t> entries;
    std::string requestorsName;
    std::string name;
    LeaguesLcdsQueueType_t queue;
    LeaguesLcdsLeagueTier_t tier;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsSummonerLeagueListDTO_t& v) {
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["requestorsRank"] = v.requestorsRank;
    j["entries"] = v.entries;
    j["requestorsName"] = v.requestorsName;
    j["name"] = v.name;
    j["queue"] = v.queue;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsSummonerLeagueListDTO_t& v) {
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>();
    v.requestorsRank = j.at("requestorsRank").get<LeaguesLcdsLeagueRank_t>();
    v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO_t>>();
    v.requestorsName = j.at("requestorsName").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.queue = j.at("queue").get<LeaguesLcdsQueueType_t>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
  }
  inline std::string to_string(const LeaguesLcdsSummonerLeagueListDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
