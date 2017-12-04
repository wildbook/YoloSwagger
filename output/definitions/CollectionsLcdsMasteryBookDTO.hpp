#ifndef SWAGGER_TYPES_CollectionsLcdsMasteryBookDTO_HPP
#define SWAGGER_TYPES_CollectionsLcdsMasteryBookDTO_HPP
#include <json.hpp>
#include "CollectionsLcdsMasteryBookPageDTO.hpp"
namespace leagueapi {
  // 
  struct CollectionsLcdsMasteryBookDTO {
    // 
    std::vector<CollectionsLcdsMasteryBookPageDTO> bookPages;
    // 
    std::string dateString;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const CollectionsLcdsMasteryBookDTO& v) {
    j["bookPages"] = v.bookPages;
    j["dateString"] = v.dateString;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, CollectionsLcdsMasteryBookDTO& v) {
    v.bookPages = j.at("bookPages").get<std::vector<CollectionsLcdsMasteryBookPageDTO>>;
    v.dateString = j.at("dateString").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_CollectionsLcdsMasteryBookDTO_HPP
