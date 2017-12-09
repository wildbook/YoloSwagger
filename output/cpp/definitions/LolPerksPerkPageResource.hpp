#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksPerkPageResource_t {
    int32_t formatVersion;
    bool isActive;
    bool isDeletable;
    bool isEditable;
    int32_t subStyleId;
    int32_t id;
    std::vector<int32_t> selectedPerkIds;
    std::string name;
    bool isValid;
    int32_t primaryStyleId;
    int32_t order;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkPageResource_t& v) {
    j["formatVersion"] = v.formatVersion;
    j["isActive"] = v.isActive;
    j["isDeletable"] = v.isDeletable;
    j["isEditable"] = v.isEditable;
    j["subStyleId"] = v.subStyleId;
    j["id"] = v.id;
    j["selectedPerkIds"] = v.selectedPerkIds;
    j["name"] = v.name;
    j["isValid"] = v.isValid;
    j["primaryStyleId"] = v.primaryStyleId;
    j["order"] = v.order;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkPageResource_t& v) {
    v.formatVersion = j.at("formatVersion").get<int32_t>();
    v.isActive = j.at("isActive").get<bool>();
    v.isDeletable = j.at("isDeletable").get<bool>();
    v.isEditable = j.at("isEditable").get<bool>();
    v.subStyleId = j.at("subStyleId").get<int32_t>();
    v.id = j.at("id").get<int32_t>();
    v.selectedPerkIds = j.at("selectedPerkIds").get<std::vector<int32_t>>();
    v.name = j.at("name").get<std::string>();
    v.isValid = j.at("isValid").get<bool>();
    v.primaryStyleId = j.at("primaryStyleId").get<int32_t>();
    v.order = j.at("order").get<int32_t>();
  }
  inline std::string to_string(const LolPerksPerkPageResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
