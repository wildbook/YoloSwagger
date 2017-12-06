#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueItemDTO.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
namespace leagueapi {
  struct LeaguesLcdsLeagueListDTO_t {
    std::vector<LeaguesLcdsLeagueItemDTO_t> entries;
    uint64_t maxLeagueSize;
    std::string name;
    uint64_t nextApexUpdate;
    LeaguesLcdsQueueType_t queue;
    std::string requestorsName;
    LeaguesLcdsLeagueTier_t tier;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsLeagueListDTO_t& v) {
    j["entries"] = v.entries;
    j["maxLeagueSize"] = v.maxLeagueSize;
    j["name"] = v.name;
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["queue"] = v.queue;
    j["requestorsName"] = v.requestorsName;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsLeagueListDTO_t& v) {
    v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO_t>>();
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>();
    v.queue = j.at("queue").get<LeaguesLcdsQueueType_t>();
    v.requestorsName = j.at("requestorsName").get<std::string>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
  }
}
