#pragma once
#include <json.hpp>
#include <optional>
#include "RankedLeagueItemDTO.hpp"
namespace leagueapi {
  struct RankedLeagueListDTO_t {
    uint64_t nextApexUpdate;
    std::string requestorsRank;
    std::vector<RankedLeagueItemDTO_t> entries;
    uint32_t maxLeagueSize;
    std::string requestorsName;
    std::string name;
    std::string queue;
    std::string tier;
  };

  inline void to_json(nlohmann::json& j, const RankedLeagueListDTO_t& v) {
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["requestorsRank"] = v.requestorsRank;
    j["entries"] = v.entries;
    j["maxLeagueSize"] = v.maxLeagueSize;
    j["requestorsName"] = v.requestorsName;
    j["name"] = v.name;
    j["queue"] = v.queue;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, RankedLeagueListDTO_t& v) {
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>();
    v.requestorsRank = j.at("requestorsRank").get<std::string>();
    v.entries = j.at("entries").get<std::vector<RankedLeagueItemDTO_t>>();
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint32_t>();
    v.requestorsName = j.at("requestorsName").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.queue = j.at("queue").get<std::string>();
    v.tier = j.at("tier").get<std::string>();
  }
  inline std::string to_string(const RankedLeagueListDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
