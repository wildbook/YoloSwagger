#pragma once
#include <json.hpp>
#include <optional>
#include "RankedLeagueItemDTO.hpp"
namespace leagueapi {
  struct RankedLeagueListDTO_t {
    std::string name;
    std::vector<RankedLeagueItemDTO_t> entries;
    std::string requestorsRank;
    uint64_t nextApexUpdate;
    std::string queue;
    std::string tier;
    std::string requestorsName;
    uint32_t maxLeagueSize;
  };

  inline void to_json(nlohmann::json& j, const RankedLeagueListDTO_t& v) {
    j["name"] = v.name;
    j["entries"] = v.entries;
    j["requestorsRank"] = v.requestorsRank;
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["queue"] = v.queue;
    j["tier"] = v.tier;
    j["requestorsName"] = v.requestorsName;
    j["maxLeagueSize"] = v.maxLeagueSize;
  }

  inline void from_json(const nlohmann::json& j, RankedLeagueListDTO_t& v) {
    v.name = j.at("name").get<std::string>();
    v.entries = j.at("entries").get<std::vector<RankedLeagueItemDTO_t>>();
    v.requestorsRank = j.at("requestorsRank").get<std::string>();
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>();
    v.queue = j.at("queue").get<std::string>();
    v.tier = j.at("tier").get<std::string>();
    v.requestorsName = j.at("requestorsName").get<std::string>();
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint32_t>();
  }
  inline std::string to_string(const RankedLeagueListDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
