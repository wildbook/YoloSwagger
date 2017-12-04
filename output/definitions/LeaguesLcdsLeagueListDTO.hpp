#ifndef SWAGGER_TYPES_LeaguesLcdsLeagueListDTO_HPP
#define SWAGGER_TYPES_LeaguesLcdsLeagueListDTO_HPP
#include <json.hpp>
#include "LeaguesLcdsLeagueItemDTO.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsQueueType.hpp"
namespace leagueapi {
  // 
  struct LeaguesLcdsLeagueListDTO {
    // 
    std::vector<LeaguesLcdsLeagueItemDTO> entries;
    // 
    uint64_t maxLeagueSize;
    // 
    std::string name;
    // 
    uint64_t nextApexUpdate;
    // 
    LeaguesLcdsQueueType queue;
    // 
    std::string requestorsName;
    // 
    LeaguesLcdsLeagueTier tier;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsLeagueListDTO& v) {
    j["entries"] = v.entries;
    j["maxLeagueSize"] = v.maxLeagueSize;
    j["name"] = v.name;
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["queue"] = v.queue;
    j["requestorsName"] = v.requestorsName;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsLeagueListDTO& v) {
    v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO>>;
    v.maxLeagueSize = j.at("maxLeagueSize").get<uint64_t>;
    v.name = j.at("name").get<std::string>;
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>;
    v.queue = j.at("queue").get<LeaguesLcdsQueueType>;
    v.requestorsName = j.at("requestorsName").get<std::string>;
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsLeagueListDTO_HPP
