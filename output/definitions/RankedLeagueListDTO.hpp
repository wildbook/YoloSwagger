#ifndef SWAGGER_TYPES_RankedLeagueListDTO_HPP
#define SWAGGER_TYPES_RankedLeagueListDTO_HPP
#include <json.hpp>
#include "RankedLeagueItemDTO.hpp"
namespace leagueapi {
  // 
  struct RankedLeagueListDTO {
    // 
    std::vector<RankedLeagueItemDTO> entries;
    // 
    uint32_t maxLeagueSize;
    // 
    std::string name;
    // 
    uint64_t nextApexUpdate;
    // 
    std::string queue;
    // 
    std::string requestorsName;
    // 
    std::string requestorsRank;
    // 
    std::string tier;
  };

  void to_json(nlohmann::json& j, const RankedLeagueListDTO& v) {
    j["entries"] = v.entries;
    j["maxLeagueSize"] = v.maxLeagueSize;
    j["name"] = v.name;
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["queue"] = v.queue;
    j["requestorsName"] = v.requestorsName;
    j["requestorsRank"] = v.requestorsRank;
    j["tier"] = v.tier;
  }

  void from_json(const nlohmann::json& j, RankedLeagueListDTO& v) {
    v.entries = j.at("entries").get<std::vector<RankedLeagueItemDTO>>;
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint32_t>;
    v.name = j.at("name").get<std::string>;
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>;
    v.queue = j.at("queue").get<std::string>;
    v.requestorsName = j.at("requestorsName").get<std::string>;
    v.requestorsRank = j.at("requestorsRank").get<std::string>;
    v.tier = j.at("tier").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RankedLeagueListDTO_HPP
