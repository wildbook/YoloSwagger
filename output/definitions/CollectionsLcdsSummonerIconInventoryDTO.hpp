#ifndef SWAGGER_TYPES_CollectionsLcdsSummonerIconInventoryDTO_HPP
#define SWAGGER_TYPES_CollectionsLcdsSummonerIconInventoryDTO_HPP
#include <json.hpp>
#include "CollectionsLcdsSummonerIcon.hpp"
namespace test {
  // 
  struct CollectionsLcdsSummonerIconInventoryDTO {
'    // 
    std::string dateString;
    // 
    std::vector<CollectionsLcdsSummonerIcon> summonerIcons;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const CollectionsLcdsSummonerIconInventoryDTO& v) {
    j["dateString"] = v.dateString;
    j["summonerIcons"] = v.summonerIcons;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, CollectionsLcdsSummonerIconInventoryDTO& v) {
    v.dateString = j.at("dateString").get<std::string>;
    v.summonerIcons = j.at("summonerIcons").get<std::vector<CollectionsLcdsSummonerIcon>>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_CollectionsLcdsSummonerIconInventoryDTO_HPP
