#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsTalentEntry.hpp"
namespace leagueapi {
  struct CollectionsLcdsMasteryBookPageDTO_t {
    uint64_t summonerId;
    uint32_t pageId;
    std::string name;
    uint64_t createDate;
    std::vector<CollectionsLcdsTalentEntry_t> talentEntries;
    bool current;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsMasteryBookPageDTO_t& v) {
    j["summonerId"] = v.summonerId;
    j["pageId"] = v.pageId;
    j["name"] = v.name;
    j["createDate"] = v.createDate;
    j["talentEntries"] = v.talentEntries;
    j["current"] = v.current;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsMasteryBookPageDTO_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.pageId = j.at("pageId").get<uint32_t>();
    v.name = j.at("name").get<std::string>();
    v.createDate = j.at("createDate").get<uint64_t>();
    v.talentEntries = j.at("talentEntries").get<std::vector<CollectionsLcdsTalentEntry_t>>();
    v.current = j.at("current").get<bool>();
  }
  inline std::string to_string(const CollectionsLcdsMasteryBookPageDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
