#pragma once
#include <json.hpp>
#include <optional>
#include "RecofrienderActionResource.hpp"
namespace leagueapi {
  struct RecofrienderAccountResource_t {
    uint64_t accountId;
    std::vector<RecofrienderActionResource_t> contacts;
    std::string platformId;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderAccountResource_t& v) {
    j["accountId"] = v.accountId;
    j["contacts"] = v.contacts;
    j["platformId"] = v.platformId;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderAccountResource_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.contacts = j.at("contacts").get<std::vector<RecofrienderActionResource_t>>();
    v.platformId = j.at("platformId").get<std::string>();
  }
}
