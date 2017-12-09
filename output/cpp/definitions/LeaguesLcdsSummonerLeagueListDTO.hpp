#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsLeagueItemDTO.hpp"
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsQueueType.hpp"
namespace leagueapi {
  struct LeaguesLcdsSummonerLeagueListDTO_t {
    std::string name;
    std::vector<LeaguesLcdsLeagueItemDTO_t> entries;
    uint64_t nextApexUpdate;
    LeaguesLcdsQueueType_t queue;
    LeaguesLcdsLeagueTier_t tier;
    std::string requestorsName;
    LeaguesLcdsLeagueRank_t requestorsRank;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsSummonerLeagueListDTO_t& v) {
    j["name"] = v.name;
    j["entries"] = v.entries;
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["queue"] = v.queue;
    j["tier"] = v.tier;
    j["requestorsName"] = v.requestorsName;
    j["requestorsRank"] = v.requestorsRank;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsSummonerLeagueListDTO_t& v) {
    v.name = j.at("name").get<std::string>();
    v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO_t>>();
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>();
    v.queue = j.at("queue").get<LeaguesLcdsQueueType_t>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
    v.requestorsName = j.at("requestorsName").get<std::string>();
    v.requestorsRank = j.at("requestorsRank").get<LeaguesLcdsLeagueRank_t>();
  }
  inline std::string to_string(const LeaguesLcdsSummonerLeagueListDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
