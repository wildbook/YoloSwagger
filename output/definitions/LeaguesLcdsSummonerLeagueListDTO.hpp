#ifndef SWAGGER_TYPES_LeaguesLcdsSummonerLeagueListDTO_HPP
#define SWAGGER_TYPES_LeaguesLcdsSummonerLeagueListDTO_HPP
#include <json.hpp>
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsLeagueItemDTO.hpp"
namespace test {
  // 
  struct LeaguesLcdsSummonerLeagueListDTO {
'    // 
    std::vector<LeaguesLcdsLeagueItemDTO> entries;
    // 
    std::string name;
    // 
    uint64_t nextApexUpdate;
    // 
    LeaguesLcdsQueueType queue;
    // 
    std::string requestorsName;
    // 
    LeaguesLcdsLeagueRank requestorsRank;
    // 
    LeaguesLcdsLeagueTier tier;
  };

  void to_json(nlohmann::json& j, const LeaguesLcdsSummonerLeagueListDTO& v) {
    j["entries"] = v.entries;
    j["name"] = v.name;
    j["nextApexUpdate"] = v.nextApexUpdate;
    j["queue"] = v.queue;
    j["requestorsName"] = v.requestorsName;
    j["requestorsRank"] = v.requestorsRank;
    j["tier"] = v.tier;
  }

  void from_json(const nlohmann::json& j, LeaguesLcdsSummonerLeagueListDTO& v) {
    v.entries = j.at("entries").get<std::vector<LeaguesLcdsLeagueItemDTO>>;
    v.name = j.at("name").get<std::string>;
    v.nextApexUpdate = j.at("nextApexUpdate").get<uint64_t>;
    v.queue = j.at("queue").get<LeaguesLcdsQueueType>;
    v.requestorsName = j.at("requestorsName").get<std::string>;
    v.requestorsRank = j.at("requestorsRank").get<LeaguesLcdsLeagueRank>;
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsSummonerLeagueListDTO_HPP
