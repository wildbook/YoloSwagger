#ifndef SWAGGER_TYPES_RankedLeagueListDTO_HPP
#define SWAGGER_TYPES_RankedLeagueListDTO_HPP
#include <json.hpp>
#include "RankedLeagueItemDTO.hpp"
namespace leagueapi {
  // 
  struct RankedLeagueListDTO {
    // 
    std::string requestorsName;
    // 
    uint64_t nextApexUpdate;
    // 
    std::string name;
    // 
    uint32_t maxLeagueSize;
    // 
    std::string requestorsRank;
    // 
    std::string queue;
    // 
    std::vector<RankedLeagueItemDTO> entries;
    // 
    std::string tier;
  };

  inline void to_json(nlohmann::json& j, const RankedLeagueListDTO& v) {
    j["requestorsName"] = v.requestorsName;
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["name"] = v.name;
    j["maxLeagueSize"] = v.maxLeagueSize;
    j["requestorsRank"] = v.requestorsRank;
    j["queue"] = v.queue;
    j["entries"] = v.entries;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, RankedLeagueListDTO& v) {
    v.requestorsName = j.at("requestorsName").get<std::string>;
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>;
    v.name = j.at("name").get<std::string>;
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint32_t>;
    v.requestorsRank = j.at("requestorsRank").get<std::string>;
    v.queue = j.at("queue").get<std::string>;
    v.entries = j.at("entries").get<std::vector<RankedLeagueItemDTO>>;
    v.tier = j.at("tier").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RankedLeagueListDTO_HPP
