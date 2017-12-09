#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksPerkPageResource_t {
    bool isActive;
    int32_t formatVersion;
    int32_t primaryStyleId;
    bool isValid;
    int32_t subStyleId;
    int32_t order;
    std::string name;
    bool isEditable;
    int32_t id;
    std::vector<int32_t> selectedPerkIds;
    bool isDeletable;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkPageResource_t& v) {
    j["isActive"] = v.isActive;
    j["formatVersion"] = v.formatVersion;
    j["primaryStyleId"] = v.primaryStyleId;
    j["isValid"] = v.isValid;
    j["subStyleId"] = v.subStyleId;
    j["order"] = v.order;
    j["name"] = v.name;
    j["isEditable"] = v.isEditable;
    j["id"] = v.id;
    j["selectedPerkIds"] = v.selectedPerkIds;
    j["isDeletable"] = v.isDeletable;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkPageResource_t& v) {
    v.isActive = j.at("isActive").get<bool>();
    v.formatVersion = j.at("formatVersion").get<int32_t>();
    v.primaryStyleId = j.at("primaryStyleId").get<int32_t>();
    v.isValid = j.at("isValid").get<bool>();
    v.subStyleId = j.at("subStyleId").get<int32_t>();
    v.order = j.at("order").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.isEditable = j.at("isEditable").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.selectedPerkIds = j.at("selectedPerkIds").get<std::vector<int32_t>>();
    v.isDeletable = j.at("isDeletable").get<bool>();
  }
  inline std::string to_string(const LolPerksPerkPageResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
