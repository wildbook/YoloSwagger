#ifndef SWAGGER_TYPES_CollectionsLcdsSpellBookPageDTO_HPP
#define SWAGGER_TYPES_CollectionsLcdsSpellBookPageDTO_HPP
#include <json.hpp>
#include "CollectionsLcdsSlotEntry.hpp"
namespace leagueapi {
  // 
  struct CollectionsLcdsSpellBookPageDTO {
    // 
    uint64_t createDate;
    // 
    bool current;
    // 
    std::string name;
    // 
    uint32_t pageId;
    // 
    std::vector<CollectionsLcdsSlotEntry> slotEntries;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSpellBookPageDTO& v) {
    j["createDate"] = v.createDate;
    j["current"] = v.current;
    j["name"] = v.name;
    j["pageId"] = v.pageId;
    j["slotEntries"] = v.slotEntries;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSpellBookPageDTO& v) {
    v.createDate = j.at("createDate").get<uint64_t>;
    v.current = j.at("current").get<bool>;
    v.name = j.at("name").get<std::string>;
    v.pageId = j.at("pageId").get<uint32_t>;
    v.slotEntries = j.at("slotEntries").get<std::vector<CollectionsLcdsSlotEntry>>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_CollectionsLcdsSpellBookPageDTO_HPP
