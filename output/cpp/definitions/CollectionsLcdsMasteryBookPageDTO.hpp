#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsTalentEntry.hpp"
namespace leagueapi {
  struct CollectionsLcdsMasteryBookPageDTO_t {
    uint64_t createDate;
    bool current;
    std::string name;
    uint32_t pageId;
    uint64_t summonerId;
    std::vector<CollectionsLcdsTalentEntry_t> talentEntries;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsMasteryBookPageDTO_t& v) {
    j["createDate"] = v.createDate;
    j["current"] = v.current;
    j["name"] = v.name;
    j["pageId"] = v.pageId;
    j["summonerId"] = v.summonerId;
    j["talentEntries"] = v.talentEntries;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsMasteryBookPageDTO_t& v) {
    v.createDate = j.at("createDate").get<uint64_t>();
    v.current = j.at("current").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.pageId = j.at("pageId").get<uint32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.talentEntries = j.at("talentEntries").get<std::vector<CollectionsLcdsTalentEntry_t>>();
  }
}
