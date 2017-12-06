#pragma once
#include <json.hpp>
#include <optional>
#include "RecofrienderFriendState.hpp"
namespace leagueapi {
  struct RecofrienderContactResource_t {
    uint64_t accountId;
    std::string action;
    std::string displayState;
    RecofrienderFriendState_t friendState;
    std::string imageUrl;
    std::string name;
    int64_t recommendScore;
    std::string source;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderContactResource_t& v) {
    j["accountId"] = v.accountId;
    j["action"] = v.action;
    j["displayState"] = v.displayState;
    j["friendState"] = v.friendState;
    j["imageUrl"] = v.imageUrl;
    j["name"] = v.name;
    j["recommendScore"] = v.recommendScore;
    j["source"] = v.source;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderContactResource_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.action = j.at("action").get<std::string>();
    v.displayState = j.at("displayState").get<std::string>();
    v.friendState = j.at("friendState").get<RecofrienderFriendState_t>();
    v.imageUrl = j.at("imageUrl").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.recommendScore = j.at("recommendScore").get<int64_t>();
    v.source = j.at("source").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
