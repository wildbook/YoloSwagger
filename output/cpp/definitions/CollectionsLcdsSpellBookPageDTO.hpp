#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsSlotEntry.hpp"
namespace leagueapi {
  struct CollectionsLcdsSpellBookPageDTO_t {
    uint32_t pageId;
    std::string name;
    std::vector<CollectionsLcdsSlotEntry_t> slotEntries;
    uint64_t createDate;
    bool current;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSpellBookPageDTO_t& v) {
    j["pageId"] = v.pageId;
    j["name"] = v.name;
    j["slotEntries"] = v.slotEntries;
    j["createDate"] = v.createDate;
    j["current"] = v.current;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSpellBookPageDTO_t& v) {
    v.pageId = j.at("pageId").get<uint32_t>();
    v.name = j.at("name").get<std::string>();
    v.slotEntries = j.at("slotEntries").get<std::vector<CollectionsLcdsSlotEntry_t>>();
    v.createDate = j.at("createDate").get<uint64_t>();
    v.current = j.at("current").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const CollectionsLcdsSpellBookPageDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
