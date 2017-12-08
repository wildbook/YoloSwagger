#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsLeagueItemDTO.hpp"
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
namespace leagueapi {
  struct LeaguesLcdsLeagueListDTO_t {
    std::string requestorsName;
    uint64_t nextApexUpdate;
    std::string name;
    uint64_t maxLeagueSize;
    LeaguesLcdsQueueType_t queue;
    std::vector<LeaguesLcdsLeagueItemDTO_t> entries;
    LeaguesLcdsLeagueTier_t tier;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsLeagueListDTO_t& v) {
    j["requestorsName"] = v.requestorsName;
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["name"] = v.name;
    j["maxLeagueSize"] = v.maxLeagueSize;
    j["queue"] = v.queue;
    j["entries"] = v.entries;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsLeagueListDTO_t& v) {
    v.requestorsName = j.at("requestorsName").get<std::string>();
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint64_t>();
    v.queue = j.at("queue").get<LeaguesLcdsQueueType_t>();
    v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO_t>>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
  }
  inline std::string to_string(const LeaguesLcdsLeagueListDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
