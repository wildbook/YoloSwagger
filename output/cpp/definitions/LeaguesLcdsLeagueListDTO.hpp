#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsLeagueItemDTO.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsQueueType.hpp"
namespace leagueapi {
  struct LeaguesLcdsLeagueListDTO_t {
    uint64_t maxLeagueSize;
    LeaguesLcdsLeagueTier_t tier;
    std::string name;
    uint64_t nextApexUpdate;
    std::vector<LeaguesLcdsLeagueItemDTO_t> entries;
    LeaguesLcdsQueueType_t queue;
    std::string requestorsName;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsLeagueListDTO_t& v) {
    j["maxLeagueSize"] = v.maxLeagueSize;
    j["tier"] = v.tier;
    j["name"] = v.name;
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["entries"] = v.entries;
    j["queue"] = v.queue;
    j["requestorsName"] = v.requestorsName;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsLeagueListDTO_t& v) {
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint64_t>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
    v.name = j.at("name").get<std::string>();
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>();
    v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO_t>>();
    v.queue = j.at("queue").get<LeaguesLcdsQueueType_t>();
    v.requestorsName = j.at("requestorsName").get<std::string>();
  }
}
