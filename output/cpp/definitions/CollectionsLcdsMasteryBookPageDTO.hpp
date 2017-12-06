#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsTalentEntry.hpp"
namespace leagueapi {
  struct CollectionsLcdsMasteryBookPageDTO_t {
    std::vector<CollectionsLcdsTalentEntry_t> talentEntries;
    std::string name;
    uint64_t createDate;
    uint32_t pageId;
    bool current;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsMasteryBookPageDTO_t& v) {
    j["talentEntries"] = v.talentEntries;
    j["name"] = v.name;
    j["createDate"] = v.createDate;
    j["pageId"] = v.pageId;
    j["current"] = v.current;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsMasteryBookPageDTO_t& v) {
    v.talentEntries = j.at("talentEntries").get<std::vector<CollectionsLcdsTalentEntry_t>>();
    v.name = j.at("name").get<std::string>();
    v.createDate = j.at("createDate").get<uint64_t>();
    v.pageId = j.at("pageId").get<uint32_t>();
    v.current = j.at("current").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
