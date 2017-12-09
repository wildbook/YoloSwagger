#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueItemDTO.hpp"
#include "LeaguesLcdsLeagueRank.hpp"
namespace leagueapi {
  struct LeaguesLcdsSummonerLeagueListDTO_t {
    LeaguesLcdsLeagueRank_t requestorsRank;
    LeaguesLcdsQueueType_t queue;
    LeaguesLcdsLeagueTier_t tier;
    uint64_t nextApexUpdate;
    std::vector<LeaguesLcdsLeagueItemDTO_t> entries;
    std::string requestorsName;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsSummonerLeagueListDTO_t& v) {
    j["requestorsRank"] = v.requestorsRank;
    j["queue"] = v.queue;
    j["tier"] = v.tier;
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["entries"] = v.entries;
    j["requestorsName"] = v.requestorsName;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsSummonerLeagueListDTO_t& v) {
    v.requestorsRank = j.at("requestorsRank").get<LeaguesLcdsLeagueRank_t>();
    v.queue = j.at("queue").get<LeaguesLcdsQueueType_t>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>();
    v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO_t>>();
    v.requestorsName = j.at("requestorsName").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LeaguesLcdsSummonerLeagueListDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
