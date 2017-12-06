#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsSlotEntry.hpp"
namespace leagueapi {
  struct CollectionsLcdsSpellBookPageDTO_t {
    std::string name;
    uint64_t createDate;
    uint32_t pageId;
    bool current;
    uint64_t summonerId;
    std::vector<CollectionsLcdsSlotEntry_t> slotEntries;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSpellBookPageDTO_t& v) {
    j["name"] = v.name;
    j["createDate"] = v.createDate;
    j["pageId"] = v.pageId;
    j["current"] = v.current;
    j["summonerId"] = v.summonerId;
    j["slotEntries"] = v.slotEntries;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSpellBookPageDTO_t& v) {
    v.name = j.at("name").get<std::string>();
    v.createDate = j.at("createDate").get<uint64_t>();
    v.pageId = j.at("pageId").get<uint32_t>();
    v.current = j.at("current").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.slotEntries = j.at("slotEntries").get<std::vector<CollectionsLcdsSlotEntry_t>>();
  }
}
