#ifndef SWAGGER_TYPES_CollectionsLcdsSpellBookDTO_HPP
#define SWAGGER_TYPES_CollectionsLcdsSpellBookDTO_HPP
#include <json.hpp>
#include "CollectionsLcdsSpellBookPageDTO.hpp"
namespace test {
  // 
  struct CollectionsLcdsSpellBookDTO {
'    // 
    std::vector<CollectionsLcdsSpellBookPageDTO> bookPages;
    // 
    std::string dateString;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const CollectionsLcdsSpellBookDTO& v) {
    j["bookPages"] = v.bookPages;
    j["dateString"] = v.dateString;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, CollectionsLcdsSpellBookDTO& v) {
    v.bookPages = j.at("bookPages").get<std::vector<CollectionsLcdsSpellBookPageDTO>>;
    v.dateString = j.at("dateString").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_CollectionsLcdsSpellBookDTO_HPP
