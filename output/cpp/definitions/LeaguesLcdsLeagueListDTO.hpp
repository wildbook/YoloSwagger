#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsLeagueItemDTO.hpp"
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
namespace leagueapi {
  struct LeaguesLcdsLeagueListDTO_t {
    std::string requestorsName;
    LeaguesLcdsQueueType_t queue;
    uint64_t nextApexUpdate;
    uint64_t maxLeagueSize;
    std::string name;
    std::vector<LeaguesLcdsLeagueItemDTO_t> entries;
    LeaguesLcdsLeagueTier_t tier;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsLeagueListDTO_t& v) {
    j["requestorsName"] = v.requestorsName;
    j["queue"] = v.queue;
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["maxLeagueSize"] = v.maxLeagueSize;
    j["name"] = v.name;
    j["entries"] = v.entries;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsLeagueListDTO_t& v) {
    v.requestorsName = j.at("requestorsName").get<std::string>();
    v.queue = j.at("queue").get<LeaguesLcdsQueueType_t>();
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>();
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO_t>>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
  }
  inline std::string to_string(const LeaguesLcdsLeagueListDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
