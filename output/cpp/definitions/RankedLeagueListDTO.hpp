#pragma once
#include <json.hpp>
#include <optional>
#include "RankedLeagueItemDTO.hpp"
namespace leagueapi {
  struct RankedLeagueListDTO_t {
    uint32_t maxLeagueSize;
    std::string queue;
    std::string tier;
    uint64_t nextApexUpdate;
    std::vector<RankedLeagueItemDTO_t> entries;
    std::string requestorsName;
    std::string requestorsRank;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const RankedLeagueListDTO_t& v) {
    j["maxLeagueSize"] = v.maxLeagueSize;
    j["queue"] = v.queue;
    j["tier"] = v.tier;
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["entries"] = v.entries;
    j["requestorsName"] = v.requestorsName;
    j["requestorsRank"] = v.requestorsRank;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, RankedLeagueListDTO_t& v) {
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint32_t>();
    v.queue = j.at("queue").get<std::string>();
    v.tier = j.at("tier").get<std::string>();
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>();
    v.entries = j.at("entries").get<std::vector<RankedLeagueItemDTO_t>>();
    v.requestorsName = j.at("requestorsName").get<std::string>();
    v.requestorsRank = j.at("requestorsRank").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const RankedLeagueListDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
