#pragma once
#include <json.hpp>
#include <optional>
#include "TicketOfferDTO.hpp"
#include "FailedInvite.hpp"
#include "PendingRosterMemberDTO.hpp"
#include "PendingRosterInviteeDTO.hpp"
namespace leagueapi {
  struct PendingRosterDTO_t {
    std::vector<TicketOfferDTO_t> ticketOffers;
    int64_t tournamentId;
    int32_t logoColor;
    std::string shortName;
    std::string invitationId;
    uint64_t captainId;
    std::vector<PendingRosterInviteeDTO_t> invitees;
    std::vector<PendingRosterMemberDTO_t> members;
    std::string name;
    std::vector<FailedInvite_t> inviteFaileds;
    int32_t logo;
    int32_t tier;
  };

  inline void to_json(nlohmann::json& j, const PendingRosterDTO_t& v) {
    j["ticketOffers"] = v.ticketOffers;
    j["tournamentId"] = v.tournamentId;
    j["logoColor"] = v.logoColor;
    j["shortName"] = v.shortName;
    j["invitationId"] = v.invitationId;
    j["captainId"] = v.captainId;
    j["invitees"] = v.invitees;
    j["members"] = v.members;
    j["name"] = v.name;
    j["inviteFaileds"] = v.inviteFaileds;
    j["logo"] = v.logo;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, PendingRosterDTO_t& v) {
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO_t>>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.captainId = j.at("captainId").get<uint64_t>();
    v.invitees = j.at("invitees").get<std::vector<PendingRosterInviteeDTO_t>>();
    v.members = j.at("members").get<std::vector<PendingRosterMemberDTO_t>>();
    v.name = j.at("name").get<std::string>();
    v.inviteFaileds = j.at("inviteFaileds").get<std::vector<FailedInvite_t>>();
    v.logo = j.at("logo").get<int32_t>();
    v.tier = j.at("tier").get<int32_t>();
  }
  inline std::string to_string(const PendingRosterDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
