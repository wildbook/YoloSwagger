#ifndef SWAGGER_TYPES_CollectionsLcdsSpellBookPageDTO_HPP
#define SWAGGER_TYPES_CollectionsLcdsSpellBookPageDTO_HPP
#include <json.hpp>
#include "CollectionsLcdsSlotEntry.hpp"
namespace leagueapi {
  // 
  struct CollectionsLcdsSpellBookPageDTO {
    // 
    uint32_t pageId;
    // 
    std::string name;
    // 
    std::vector<CollectionsLcdsSlotEntry> slotEntries;
    // 
    uint64_t createDate;
    // 
    bool current;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSpellBookPageDTO& v) {
    j["pageId"] = v.pageId;
    j["name"] = v.name;
    j["slotEntries"] = v.slotEntries;
    j["createDate"] = v.createDate;
    j["current"] = v.current;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSpellBookPageDTO& v) {
    v.pageId = j.at("pageId").get<uint32_t>;
    v.name = j.at("name").get<std::string>;
    v.slotEntries = j.at("slotEntries").get<std::vector<CollectionsLcdsSlotEntry>>;
    v.createDate = j.at("createDate").get<uint64_t>;
    v.current = j.at("current").get<bool>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_CollectionsLcdsSpellBookPageDTO_HPP
