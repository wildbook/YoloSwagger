#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsSlotEntry.hpp"
namespace leagueapi {
  struct CollectionsLcdsSpellBookPageDTO_t {
    std::string name;
    bool current;
    std::vector<CollectionsLcdsSlotEntry_t> slotEntries;
    uint64_t createDate;
    uint64_t summonerId;
    uint32_t pageId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSpellBookPageDTO_t& v) {
    j["name"] = v.name;
    j["current"] = v.current;
    j["slotEntries"] = v.slotEntries;
    j["createDate"] = v.createDate;
    j["summonerId"] = v.summonerId;
    j["pageId"] = v.pageId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSpellBookPageDTO_t& v) {
    v.name = j.at("name").get<std::string>();
    v.current = j.at("current").get<bool>();
    v.slotEntries = j.at("slotEntries").get<std::vector<CollectionsLcdsSlotEntry_t>>();
    v.createDate = j.at("createDate").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.pageId = j.at("pageId").get<uint32_t>();
  }
  inline std::string to_string(const CollectionsLcdsSpellBookPageDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
