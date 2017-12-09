#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsSlotEntry.hpp"
namespace leagueapi {
  struct CollectionsLcdsSpellBookPageDTO_t {
    uint32_t pageId;
    bool current;
    uint64_t createDate;
    uint64_t summonerId;
    std::string name;
    std::vector<CollectionsLcdsSlotEntry_t> slotEntries;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSpellBookPageDTO_t& v) {
    j["pageId"] = v.pageId;
    j["current"] = v.current;
    j["createDate"] = v.createDate;
    j["summonerId"] = v.summonerId;
    j["name"] = v.name;
    j["slotEntries"] = v.slotEntries;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSpellBookPageDTO_t& v) {
    v.pageId = j.at("pageId").get<uint32_t>();
    v.current = j.at("current").get<bool>();
    v.createDate = j.at("createDate").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.slotEntries = j.at("slotEntries").get<std::vector<CollectionsLcdsSlotEntry_t>>();
  }
  inline std::string to_string(const CollectionsLcdsSpellBookPageDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
