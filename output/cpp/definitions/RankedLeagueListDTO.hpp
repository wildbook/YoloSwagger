#pragma once
#include <json.hpp>
#include <optional>
#include "RankedLeagueItemDTO.hpp"
namespace leagueapi {
  struct RankedLeagueListDTO_t {
    std::vector<RankedLeagueItemDTO_t> entries;
    uint32_t maxLeagueSize;
    std::string name;
    uint64_t nextApexUpdate;
    std::string queue;
    std::string requestorsName;
    std::string requestorsRank;
    std::string tier;
  };

  inline void to_json(nlohmann::json& j, const RankedLeagueListDTO_t& v) {
    j["entries"] = v.entries;
    j["maxLeagueSize"] = v.maxLeagueSize;
    j["name"] = v.name;
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["queue"] = v.queue;
    j["requestorsName"] = v.requestorsName;
    j["requestorsRank"] = v.requestorsRank;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, RankedLeagueListDTO_t& v) {
    v.entries = j.at("entries").get<std::vector<RankedLeagueItemDTO_t>>();
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint32_t>();
    v.name = j.at("name").get<std::string>();
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>();
    v.queue = j.at("queue").get<std::string>();
    v.requestorsName = j.at("requestorsName").get<std::string>();
    v.requestorsRank = j.at("requestorsRank").get<std::string>();
    v.tier = j.at("tier").get<std::string>();
  }
}
