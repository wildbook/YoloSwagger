#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksPerkPageResource_t {
    int32_t formatVersion;
    bool isEditable;
    int32_t primaryStyleId;
    bool isDeletable;
    bool isValid;
    int32_t id;
    bool isActive;
    std::vector<int32_t> selectedPerkIds;
    int32_t order;
    int32_t subStyleId;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkPageResource_t& v) {
    j["formatVersion"] = v.formatVersion;
    j["isEditable"] = v.isEditable;
    j["primaryStyleId"] = v.primaryStyleId;
    j["isDeletable"] = v.isDeletable;
    j["isValid"] = v.isValid;
    j["id"] = v.id;
    j["isActive"] = v.isActive;
    j["selectedPerkIds"] = v.selectedPerkIds;
    j["order"] = v.order;
    j["subStyleId"] = v.subStyleId;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkPageResource_t& v) {
    v.formatVersion = j.at("formatVersion").get<int32_t>();
    v.isEditable = j.at("isEditable").get<bool>();
    v.primaryStyleId = j.at("primaryStyleId").get<int32_t>();
    v.isDeletable = j.at("isDeletable").get<bool>();
    v.isValid = j.at("isValid").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.isActive = j.at("isActive").get<bool>();
    v.selectedPerkIds = j.at("selectedPerkIds").get<std::vector<int32_t>>();
    v.order = j.at("order").get<int32_t>();
    v.subStyleId = j.at("subStyleId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolPerksPerkPageResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
