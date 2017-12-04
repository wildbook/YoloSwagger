#ifndef SWAGGER_TYPES_LeaguesLcdsSummonerLeagueListDTO_HPP
#define SWAGGER_TYPES_LeaguesLcdsSummonerLeagueListDTO_HPP
#include <json.hpp>
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueItemDTO.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsLeagueRank.hpp"
namespace leagueapi {
  // 
  struct LeaguesLcdsSummonerLeagueListDTO {
    // 
    std::string requestorsName;
    // 
    uint64_t nextApexUpdate;
    // 
    std::string name;
    // 
    LeaguesLcdsLeagueRank requestorsRank;
    // 
    LeaguesLcdsQueueType queue;
    // 
    std::vector<LeaguesLcdsLeagueItemDTO> entries;
    // 
    LeaguesLcdsLeagueTier tier;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsSummonerLeagueListDTO& v) {
    j["requestorsName"] = v.requestorsName;
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["name"] = v.name;
    j["requestorsRank"] = v.requestorsRank;
    j["queue"] = v.queue;
    j["entries"] = v.entries;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsSummonerLeagueListDTO& v) {
    v.requestorsName = j.at("requestorsName").get<std::string>;
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>;
    v.name = j.at("name").get<std::string>;
    v.requestorsRank = j.at("requestorsRank").get<LeaguesLcdsLeagueRank>;
    v.queue = j.at("queue").get<LeaguesLcdsQueueType>;
    v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO>>;
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsSummonerLeagueListDTO_HPP
