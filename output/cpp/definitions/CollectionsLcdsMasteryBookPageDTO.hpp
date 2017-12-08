#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsTalentEntry.hpp"
namespace leagueapi {
  struct CollectionsLcdsMasteryBookPageDTO_t {
    uint32_t pageId;
    std::string name;
    uint64_t createDate;
    bool current;
    uint64_t summonerId;
    std::vector<CollectionsLcdsTalentEntry_t> talentEntries;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsMasteryBookPageDTO_t& v) {
    j["pageId"] = v.pageId;
    j["name"] = v.name;
    j["createDate"] = v.createDate;
    j["current"] = v.current;
    j["summonerId"] = v.summonerId;
    j["talentEntries"] = v.talentEntries;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsMasteryBookPageDTO_t& v) {
    v.pageId = j.at("pageId").get<uint32_t>();
    v.name = j.at("name").get<std::string>();
    v.createDate = j.at("createDate").get<uint64_t>();
    v.current = j.at("current").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.talentEntries = j.at("talentEntries").get<std::vector<CollectionsLcdsTalentEntry_t>>();
  }
  inline std::string to_string(const CollectionsLcdsMasteryBookPageDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
