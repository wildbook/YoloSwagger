#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsSlotEntry.hpp"
namespace leagueapi {
  struct CollectionsLcdsSpellBookPageDTO_t {
    uint64_t summonerId;
    uint32_t pageId;
    std::vector<CollectionsLcdsSlotEntry_t> slotEntries;
    std::string name;
    uint64_t createDate;
    bool current;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSpellBookPageDTO_t& v) {
    j["summonerId"] = v.summonerId;
    j["pageId"] = v.pageId;
    j["slotEntries"] = v.slotEntries;
    j["name"] = v.name;
    j["createDate"] = v.createDate;
    j["current"] = v.current;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSpellBookPageDTO_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.pageId = j.at("pageId").get<uint32_t>();
    v.slotEntries = j.at("slotEntries").get<std::vector<CollectionsLcdsSlotEntry_t>>();
    v.name = j.at("name").get<std::string>();
    v.createDate = j.at("createDate").get<uint64_t>();
    v.current = j.at("current").get<bool>();
  }
  inline std::string to_string(const CollectionsLcdsSpellBookPageDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
