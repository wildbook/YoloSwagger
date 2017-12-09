#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsTalentEntry.hpp"
namespace leagueapi {
  struct CollectionsLcdsMasteryBookPageDTO_t {
    std::vector<CollectionsLcdsTalentEntry_t> talentEntries;
    std::string name;
    bool current;
    uint64_t createDate;
    uint64_t summonerId;
    uint32_t pageId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsMasteryBookPageDTO_t& v) {
    j["talentEntries"] = v.talentEntries;
    j["name"] = v.name;
    j["current"] = v.current;
    j["createDate"] = v.createDate;
    j["summonerId"] = v.summonerId;
    j["pageId"] = v.pageId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsMasteryBookPageDTO_t& v) {
    v.talentEntries = j.at("talentEntries").get<std::vector<CollectionsLcdsTalentEntry_t>>();
    v.name = j.at("name").get<std::string>();
    v.current = j.at("current").get<bool>();
    v.createDate = j.at("createDate").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.pageId = j.at("pageId").get<uint32_t>();
  }
  inline std::string to_string(const CollectionsLcdsMasteryBookPageDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
