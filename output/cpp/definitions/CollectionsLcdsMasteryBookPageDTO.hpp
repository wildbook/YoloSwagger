#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsTalentEntry.hpp"
namespace leagueapi {
  struct CollectionsLcdsMasteryBookPageDTO_t {
    bool current;
    uint32_t pageId;
    std::string name;
    uint64_t createDate;
    std::vector<CollectionsLcdsTalentEntry_t> talentEntries;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsMasteryBookPageDTO_t& v) {
    j["current"] = v.current;
    j["pageId"] = v.pageId;
    j["name"] = v.name;
    j["createDate"] = v.createDate;
    j["talentEntries"] = v.talentEntries;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsMasteryBookPageDTO_t& v) {
    v.current = j.at("current").get<bool>();
    v.pageId = j.at("pageId").get<uint32_t>();
    v.name = j.at("name").get<std::string>();
    v.createDate = j.at("createDate").get<uint64_t>();
    v.talentEntries = j.at("talentEntries").get<std::vector<CollectionsLcdsTalentEntry_t>>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const CollectionsLcdsMasteryBookPageDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
