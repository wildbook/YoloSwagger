#pragma once
#include <json.hpp>
#include <optional>
#include "RankedLeagueItemDTO.hpp"
namespace leagueapi {
  struct RankedLeagueListDTO_t {
    uint32_t maxLeagueSize;
    std::string tier;
    std::string name;
    uint64_t nextApexUpdate;
    std::string requestorsRank;
    std::vector<RankedLeagueItemDTO_t> entries;
    std::string queue;
    std::string requestorsName;
  };

  inline void to_json(nlohmann::json& j, const RankedLeagueListDTO_t& v) {
    j["maxLeagueSize"] = v.maxLeagueSize;
    j["tier"] = v.tier;
    j["name"] = v.name;
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["requestorsRank"] = v.requestorsRank;
    j["entries"] = v.entries;
    j["queue"] = v.queue;
    j["requestorsName"] = v.requestorsName;
  }

  inline void from_json(const nlohmann::json& j, RankedLeagueListDTO_t& v) {
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint32_t>();
    v.tier = j.at("tier").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>();
    v.requestorsRank = j.at("requestorsRank").get<std::string>();
    v.entries = j.at("entries").get<std::vector<RankedLeagueItemDTO_t>>();
    v.queue = j.at("queue").get<std::string>();
    v.requestorsName = j.at("requestorsName").get<std::string>();
  }
}
