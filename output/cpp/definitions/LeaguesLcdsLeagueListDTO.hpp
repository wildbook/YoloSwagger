#ifndef SWAGGER_TYPES_LeaguesLcdsLeagueListDTO_HPP
#define SWAGGER_TYPES_LeaguesLcdsLeagueListDTO_HPP
#include <json.hpp>
#include "LeaguesLcdsLeagueItemDTO.hpp"
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
namespace leagueapi {
  // 
  struct LeaguesLcdsLeagueListDTO {
    // 
    std::string requestorsName;
    // 
    uint64_t nextApexUpdate;
    // 
    std::string name;
    // 
    uint64_t maxLeagueSize;
    // 
    LeaguesLcdsQueueType queue;
    // 
    std::vector<LeaguesLcdsLeagueItemDTO> entries;
    // 
    LeaguesLcdsLeagueTier tier;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsLeagueListDTO& v) {
    j["requestorsName"] = v.requestorsName;
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["name"] = v.name;
    j["maxLeagueSize"] = v.maxLeagueSize;
    j["queue"] = v.queue;
    j["entries"] = v.entries;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsLeagueListDTO& v) {
    v.requestorsName = j.at("requestorsName").get<std::string>;
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>;
    v.name = j.at("name").get<std::string>;
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint64_t>;
    v.queue = j.at("queue").get<LeaguesLcdsQueueType>;
    v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO>>;
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsLeagueListDTO_HPP
